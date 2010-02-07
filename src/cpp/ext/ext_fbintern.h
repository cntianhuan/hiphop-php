
#ifndef __EXT_FBINTERN_H__
#define __EXT_FBINTERN_H__

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include <cpp/base/base_includes.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

bool f_fb_debug_rlog(CVarRef err, int include_flags = -1, int type = -1, CVarRef headers = null_variant);
String f_fb_render_wrapped(CStrRef text, int linelen = 26, CStrRef head = "<span>", CStrRef tail = "</span><wbr></wbr><span class=\"word_break\"></span>");
Array f_fb_get_derived_classes(CStrRef filename, CStrRef basecls);
void f_hotprofiler_enable(int level);
Variant f_hotprofiler_disable();
void f_phprof_enable(int flags = 0);
Variant f_phprof_disable();
void f_fql_set_static_data_10(CArrRef tables, CArrRef functions);
bool f_fql_static_data_set_10();
Array f_fql_parse_10(CStrRef query);
Array f_fql_multiparse_10(CArrRef query);
Array f_xhp_preprocess_code(CStrRef code);

///////////////////////////////////////////////////////////////////////////////

inline void f_fb_set_opcode(int opcode, CStrRef callback) {
  throw NotSupportedException(__func__, "dynamic coding");
}
inline void f_fb_reset_opcode(int opcode) {
  throw NotSupportedException(__func__, "dynamic coding");
}
inline void f_fb_config_coredump(bool enabled, int limit) {
  throw NotSupportedException(__func__, "feature not supported");
}
inline String f_fb_backtrace(CVarRef exception = null_variant) {
  throw NotSupportedException(__func__, "feature not supported");
}
inline void f_fb_add_included_file(CStrRef filepath) {
  throw NotSupportedException(__func__, "dynamic coding");
}
inline Variant f_fb_request_timers() {
  return false;
}
inline String f_fb_get_ape_version() {
  return "";
}

///////////////////////////////////////////////////////////////////////////////
}

#endif // __EXT_FBINTERN_H__