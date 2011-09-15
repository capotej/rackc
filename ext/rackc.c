#include "ruby.h"

VALUE rackc = Qnil;

void Init_rackc();

VALUE method_rackc_init(VALUE self, VALUE env);

void Init_rackc() {
  rackc = rb_define_module("RackC");
  rb_define_singleton_method(rackc, "call", method_rackc_init, 1);
}

VALUE method_rackc_init(VALUE self,VALUE env){
  VALUE rack_arr;
  VALUE headers;

  rack_arr = rb_ary_new();
  headers = rb_hash_new();
  
  rb_hash_aset(headers, (VALUE *)rb_str_new2("Content-Type"), (VALUE *)rb_str_new2("plain"));

  rb_ary_push(rack_arr, INT2NUM(200)); //response code here
  rb_ary_push(rack_arr, headers); //header hash here
  rb_ary_push(rack_arr, (VALUE *)rb_str_new2("Hello World!")); //body here
  
  return rack_arr;
}
