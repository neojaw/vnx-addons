
// AUTO GENERATED by vnxcppcodegen

#include <vnx/addons/package.hxx>
#include <vnx/addons/FileServerBase.hxx>
#include <vnx/NoSuchMethod.hxx>
#include <vnx/Buffer.hpp>
#include <vnx/Module.h>
#include <vnx/ModuleInterface_vnx_get_type_code.hxx>
#include <vnx/ModuleInterface_vnx_get_type_code_return.hxx>
#include <vnx/addons/FileServer_read_file.hxx>
#include <vnx/addons/FileServer_read_file_return.hxx>
#include <vnx/addons/HttpComponent_http_request.hxx>
#include <vnx/addons/HttpComponent_http_request_return.hxx>
#include <vnx/addons/HttpRequest.hxx>
#include <vnx/addons/HttpResponse.hxx>

#include <vnx/vnx.h>


namespace vnx {
namespace addons {


const vnx::Hash64 FileServerBase::VNX_TYPE_HASH(0xcf578d3ac2b39852ull);
const vnx::Hash64 FileServerBase::VNX_CODE_HASH(0x286615577cdaee25ull);

FileServerBase::FileServerBase(const std::string& _vnx_name)
	:	Module::Module(_vnx_name)
{
	vnx::read_config(vnx_name + ".directory_files", directory_files);
	vnx::read_config(vnx_name + ".mime_type_map", mime_type_map);
	vnx::read_config(vnx_name + ".www_root", www_root);
}

vnx::Hash64 FileServerBase::get_type_hash() const {
	return VNX_TYPE_HASH;
}

const char* FileServerBase::get_type_name() const {
	return "vnx.addons.FileServer";
}
const vnx::TypeCode* FileServerBase::get_type_code() const {
	return vnx::addons::vnx_native_type_code_FileServerBase;
}

void FileServerBase::accept(vnx::Visitor& _visitor) const {
	const vnx::TypeCode* _type_code = vnx::addons::vnx_native_type_code_FileServerBase;
	_visitor.type_begin(*_type_code);
	_visitor.type_field(_type_code->fields[0], 0); vnx::accept(_visitor, www_root);
	_visitor.type_field(_type_code->fields[1], 1); vnx::accept(_visitor, mime_type_map);
	_visitor.type_field(_type_code->fields[2], 2); vnx::accept(_visitor, directory_files);
	_visitor.type_end(*_type_code);
}

void FileServerBase::write(std::ostream& _out) const {
	_out << "{";
	_out << "\"www_root\": "; vnx::write(_out, www_root);
	_out << ", \"mime_type_map\": "; vnx::write(_out, mime_type_map);
	_out << ", \"directory_files\": "; vnx::write(_out, directory_files);
	_out << "}";
}

void FileServerBase::read(std::istream& _in) {
	std::map<std::string, std::string> _object;
	vnx::read_object(_in, _object);
	for(const auto& _entry : _object) {
		if(_entry.first == "directory_files") {
			vnx::from_string(_entry.second, directory_files);
		} else if(_entry.first == "mime_type_map") {
			vnx::from_string(_entry.second, mime_type_map);
		} else if(_entry.first == "www_root") {
			vnx::from_string(_entry.second, www_root);
		}
	}
}

vnx::Object FileServerBase::to_object() const {
	vnx::Object _object;
	_object["www_root"] = www_root;
	_object["mime_type_map"] = mime_type_map;
	_object["directory_files"] = directory_files;
	return _object;
}

void FileServerBase::from_object(const vnx::Object& _object) {
	for(const auto& _entry : _object.field) {
		if(_entry.first == "directory_files") {
			_entry.second.to(directory_files);
		} else if(_entry.first == "mime_type_map") {
			_entry.second.to(mime_type_map);
		} else if(_entry.first == "www_root") {
			_entry.second.to(www_root);
		}
	}
}

/// \private
std::ostream& operator<<(std::ostream& _out, const FileServerBase& _value) {
	_value.write(_out);
	return _out;
}

/// \private
std::istream& operator>>(std::istream& _in, FileServerBase& _value) {
	_value.read(_in);
	return _in;
}

const vnx::TypeCode* FileServerBase::static_get_type_code() {
	const vnx::TypeCode* type_code = vnx::get_type_code(VNX_TYPE_HASH);
	if(!type_code) {
		type_code = vnx::register_type_code(static_create_type_code());
	}
	return type_code;
}

std::shared_ptr<vnx::TypeCode> FileServerBase::static_create_type_code() {
	std::shared_ptr<vnx::TypeCode> type_code = std::make_shared<vnx::TypeCode>();
	type_code->name = "vnx.addons.FileServer";
	type_code->type_hash = vnx::Hash64(0xcf578d3ac2b39852ull);
	type_code->code_hash = vnx::Hash64(0x286615577cdaee25ull);
	type_code->is_native = true;
	type_code->methods.resize(3);
	type_code->methods[0] = ::vnx::ModuleInterface_vnx_get_type_code::static_get_type_code();
	type_code->methods[1] = ::vnx::addons::FileServer_read_file::static_get_type_code();
	type_code->methods[2] = ::vnx::addons::HttpComponent_http_request::static_get_type_code();
	type_code->fields.resize(3);
	{
		vnx::TypeField& field = type_code->fields[0];
		field.is_extended = true;
		field.name = "www_root";
		field.code = {32};
	}
	{
		vnx::TypeField& field = type_code->fields[1];
		field.is_extended = true;
		field.name = "mime_type_map";
		field.code = {13, 3, 32, 32};
	}
	{
		vnx::TypeField& field = type_code->fields[2];
		field.is_extended = true;
		field.name = "directory_files";
		field.code = {12, 32};
	}
	type_code->build();
	return type_code;
}

void FileServerBase::vnx_handle_switch(std::shared_ptr<const vnx::Sample> _sample) {
}

std::shared_ptr<vnx::Value> FileServerBase::vnx_call_switch(std::shared_ptr<const vnx::Value> _method, const vnx::request_id_t& _request_id) {
	const auto _type_hash = _method->get_type_hash();
	if(_type_hash == vnx::Hash64(0x305ec4d628960e5dull)) {
		auto _args = std::dynamic_pointer_cast<const ::vnx::ModuleInterface_vnx_get_type_code>(_method);
		if(!_args) {
			throw std::logic_error("vnx_call_switch(): !_args");
		}
		auto _return_value = ::vnx::ModuleInterface_vnx_get_type_code_return::create();
		_return_value->_ret_0 = vnx_get_type_code();
		return _return_value;
	} else if(_type_hash == vnx::Hash64(0x36d7fc9c72b884e6ull)) {
		auto _args = std::dynamic_pointer_cast<const ::vnx::addons::FileServer_read_file>(_method);
		if(!_args) {
			throw std::logic_error("vnx_call_switch(): !_args");
		}
		auto _return_value = ::vnx::addons::FileServer_read_file_return::create();
		_return_value->_ret_0 = read_file(_args->path);
		return _return_value;
	} else if(_type_hash == vnx::Hash64(0xe0b6c38f619bad92ull)) {
		auto _args = std::dynamic_pointer_cast<const ::vnx::addons::HttpComponent_http_request>(_method);
		if(!_args) {
			throw std::logic_error("vnx_call_switch(): !_args");
		}
		http_request_async(_args->request, _args->sub_path, _request_id);
		return 0;
	}
	auto _ex = vnx::NoSuchMethod::create();
	_ex->dst_mac = vnx_request ? vnx_request->dst_mac : 0;
	_ex->method = _method->get_type_name();
	return _ex;
}

void FileServerBase::http_request_async_return(const vnx::request_id_t& _request_id, const std::shared_ptr<const ::vnx::addons::HttpResponse>& _ret_0) const {
	auto _return_value = ::vnx::addons::HttpComponent_http_request_return::create();
	_return_value->_ret_0 = _ret_0;
	vnx_async_return(_request_id, _return_value);
}


} // namespace vnx
} // namespace addons


namespace vnx {

void read(TypeInput& in, ::vnx::addons::FileServerBase& value, const TypeCode* type_code, const uint16_t* code) {
	if(code) {
		switch(code[0]) {
			case CODE_OBJECT:
			case CODE_ALT_OBJECT: {
				Object tmp;
				vnx::read(in, tmp, type_code, code);
				value.from_object(tmp);
				return;
			}
			case CODE_DYNAMIC:
			case CODE_ALT_DYNAMIC:
				vnx::read_dynamic(in, value);
				return;
		}
	}
	if(!type_code) {
		throw std::logic_error("read(): type_code == 0");
	}
	if(code) {
		switch(code[0]) {
			case CODE_STRUCT: type_code = type_code->depends[code[1]]; break;
			case CODE_ALT_STRUCT: type_code = type_code->depends[vnx::flip_bytes(code[1])]; break;
			default: vnx::skip(in, type_code, code); return;
		}
	}
	if(type_code->is_matched) {
	}
	for(const vnx::TypeField* _field : type_code->ext_fields) {
		switch(_field->native_index) {
			case 0: vnx::read(in, value.www_root, type_code, _field->code.data()); break;
			case 1: vnx::read(in, value.mime_type_map, type_code, _field->code.data()); break;
			case 2: vnx::read(in, value.directory_files, type_code, _field->code.data()); break;
			default: vnx::skip(in, type_code, _field->code.data());
		}
	}
}

void write(TypeOutput& out, const ::vnx::addons::FileServerBase& value, const TypeCode* type_code, const uint16_t* code) {
	if(!type_code || (code && code[0] == CODE_ANY)) {
		type_code = vnx::addons::vnx_native_type_code_FileServerBase;
		out.write_type_code(type_code);
		vnx::write_class_header<::vnx::addons::FileServerBase>(out);
	}
	if(code && code[0] == CODE_STRUCT) {
		type_code = type_code->depends[code[1]];
	}
	vnx::write(out, value.www_root, type_code, type_code->fields[0].code.data());
	vnx::write(out, value.mime_type_map, type_code, type_code->fields[1].code.data());
	vnx::write(out, value.directory_files, type_code, type_code->fields[2].code.data());
}

void read(std::istream& in, ::vnx::addons::FileServerBase& value) {
	value.read(in);
}

void write(std::ostream& out, const ::vnx::addons::FileServerBase& value) {
	value.write(out);
}

void accept(Visitor& visitor, const ::vnx::addons::FileServerBase& value) {
	value.accept(visitor);
}

} // vnx
