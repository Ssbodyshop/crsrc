$NetBSD: patch-src_engine.c,v 1.5 2015/01/29 11:45:25 obache Exp $

* Fixes return type mismatch:
  https://code.google.com/p/ibus-array/issues/detail?id=11

--- src/engine.c.orig	2015-01-24 16:30:52.000000000 +0000
+++ src/engine.c
@@ -67,7 +67,7 @@ static gboolean ibus_array_engine_commit
 
 static void ibus_array_engine_space_press(IBusArrayEngine *arrayeng);
 
-static gboolean ibus_array_engine_update_symbol_lookup_table (IBusArrayEngine *arrayeng);
+static void ibus_array_engine_update_symbol_lookup_table (IBusArrayEngine *arrayeng);
 
 static void ibus_array_engine_update_auxiliary_text (IBusArrayEngine *arrayeng, gchar* aux_string);
 
@@ -313,7 +313,7 @@ static void ibus_array_engine_update_pre
     g_string_free(array_preedit, TRUE);
 }
 
-static gboolean ibus_array_engine_update_symbol_lookup_table (IBusArrayEngine *arrayeng) 
+static void ibus_array_engine_update_symbol_lookup_table (IBusArrayEngine *arrayeng) 
 {
     gint i;
     gboolean retval;
