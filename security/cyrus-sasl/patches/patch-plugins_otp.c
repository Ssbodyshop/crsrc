$NetBSD: patch-plugins_otp.c,v 1.1 2015/11/10 08:46:06 manu Exp $

Fix the OTP plugin on 32 bit machines and add SHA2 support
Submitted upstream as https://bugzilla.cyrusimap.org/show_bug.cgi?id=3914

--- plugins/otp.c.orig	2012-10-12 14:05:48.000000000 +0000
+++ plugins/otp.c
@@ -93,6 +93,10 @@ static algorithm_option_t algorithm_opti
     {"md4",	0,	"md4"},
     {"md5",	0,	"md5"},
     {"sha1",	4,	"sha1"},
+    {"sha224",	4,	"sha224"},
+    {"sha256",	4,	"sha256"},
+    {"sha384",	4,	"sha384"},
+    {"sha512",	4,	"sha512"},
     {NULL,	0,	NULL}
 };
 
@@ -615,8 +619,8 @@ static int make_secret(const sasl_utils_
     bin2hex(otp, OTP_HASH_SIZE, buf);
     buf[2*OTP_HASH_SIZE] = '\0';
     
-    sprintf(data, "%s\t%04d\t%s\t%s\t%020ld",
-	    alg, seq, seed, buf, timeout);
+    sprintf(data, "%s\t%04d\t%s\t%s\t%020llu",
+	    alg, seq, seed, buf, (unsigned long long)timeout);
     
     return SASL_OK;
 }
@@ -663,6 +667,7 @@ static int parse_secret(const sasl_utils
 
     else {
 	char buf[2*OTP_HASH_SIZE+1];
+	unsigned long long timeout_val;
 	
 	/*
 	 * new-style (ASCII) secret is stored as:
@@ -676,8 +681,9 @@ static int parse_secret(const sasl_utils
 	    return SASL_FAIL;
 	}
 	
-	sscanf(secret, "%s\t%04d\t%s\t%s\t%020ld",
-	       alg, seq, seed, buf, timeout);
+	sscanf(secret, "%s\t%04d\t%s\t%s\t%020llu",
+	       alg, seq, seed, buf, &timeout_val);
+	*timeout = (time_t)timeout_val;
 	
 	hex2bin(buf, otp, OTP_HASH_SIZE);
 	
