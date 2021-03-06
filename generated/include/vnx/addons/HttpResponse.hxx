
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_vnx_addons_HttpResponse_HXX_
#define INCLUDE_vnx_addons_HttpResponse_HXX_

#include <vnx/addons/package.hxx>
#include <vnx/Buffer.hpp>
#include <vnx/Value.h>


namespace vnx {
namespace addons {

class HttpResponse : public ::vnx::Value {
public:
	
	int32_t status = 0;
	std::string content_type;
	std::vector<std::pair<std::string, std::string>> headers;
	::vnx::Buffer payload;
	
	typedef ::vnx::Value Super;
	
	static const vnx::Hash64 VNX_TYPE_HASH;
	static const vnx::Hash64 VNX_CODE_HASH;
	
	vnx::Hash64 get_type_hash() const override;
	const char* get_type_name() const override;
	const vnx::TypeCode* get_type_code() const override;
	
	static std::shared_ptr<const ::vnx::addons::HttpResponse> from_status(const int32_t& status);
	static std::shared_ptr<const ::vnx::addons::HttpResponse> from_string(const std::string& content, const std::string& mime_type);
	static std::shared_ptr<const ::vnx::addons::HttpResponse> from_string_ex(const std::string& content, const std::string& mime_type, const int32_t& status);
	static std::shared_ptr<const ::vnx::addons::HttpResponse> from_string_json(const std::string& content);
	static std::shared_ptr<const ::vnx::addons::HttpResponse> from_string_json_ex(const std::string& content, const int32_t& status);
	static std::shared_ptr<const ::vnx::addons::HttpResponse> from_object_json(const ::vnx::Object& value);
	static std::shared_ptr<const ::vnx::addons::HttpResponse> from_object_json_ex(const ::vnx::Object& value, const int32_t& status);
	static std::shared_ptr<const ::vnx::addons::HttpResponse> from_value_json(const std::shared_ptr<const ::vnx::Value>& value);
	static std::shared_ptr<const ::vnx::addons::HttpResponse> from_value_json_ex(const std::shared_ptr<const ::vnx::Value>& value, const int32_t& status);
	static std::shared_ptr<const ::vnx::addons::HttpResponse> from_value_binary(const std::shared_ptr<const ::vnx::Value>& value);
	static std::shared_ptr<const ::vnx::addons::HttpResponse> from_value_binary_ex(const std::shared_ptr<const ::vnx::Value>& value, const int32_t& status);
	
	static std::shared_ptr<HttpResponse> create();
	std::shared_ptr<vnx::Value> clone() const;
	
	void read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code);
	void write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const;
	
	void read(std::istream& _in);
	void write(std::ostream& _out) const;
	
	void accept(vnx::Visitor& _visitor) const;
	
	vnx::Object to_object() const;
	void from_object(const vnx::Object& object);
	
	vnx::Variant get_field(const std::string& name) const;
	void set_field(const std::string& name, const vnx::Variant& value);
	
	friend std::ostream& operator<<(std::ostream& _out, const HttpResponse& _value);
	friend std::istream& operator>>(std::istream& _in, HttpResponse& _value);
	
	static const vnx::TypeCode* static_get_type_code();
	static std::shared_ptr<vnx::TypeCode> static_create_type_code();
	
};


} // namespace vnx
} // namespace addons

#endif // INCLUDE_vnx_addons_HttpResponse_HXX_
