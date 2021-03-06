/*
 * FileServer.h
 *
 *  Created on: Jul 30, 2020
 *      Author: mad
 */

#ifndef INCLUDE_VNX_ADDONS_FILESERVER_H_
#define INCLUDE_VNX_ADDONS_FILESERVER_H_

#include <vnx/addons/FileServerBase.hxx>


namespace vnx {
namespace addons {

class FileServer : public FileServerBase {
public:
	FileServer(const std::string& _vnx_name);

protected:
	void init() override;

	void main() override;

	vnx::Buffer read_file(const std::string& path) const override;

	void http_request_async(const std::shared_ptr<const HttpRequest>& request,
							const std::string& sub_path,
							const vnx::request_id_t& request_id) const override;

};


} // addons
} // vnx

#endif /* INCLUDE_VNX_ADDONS_FILESERVER_H_ */
