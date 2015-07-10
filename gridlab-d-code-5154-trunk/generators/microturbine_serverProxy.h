// This file generated by staff_codegen
// For more information please visit: http://code.google.com/p/staff/
// DO NOT EDIT

#ifndef _microturbine_serverProxy_h_
#define _microturbine_serverProxy_h_

#include <staff/client/ServiceClient.h>
#include "microturbine_server.h"


//! Proxy for component service microturbine_server
class microturbine_serverProxy: public microturbine_server
{
public:
  microturbine_serverProxy();
  virtual ~microturbine_serverProxy();
  void Init(const std::string& sServiceUri, const std::string& sSessionId, const std::string& sInstanceId);
  void Deinit();
  virtual staff::ServiceClient* GetClient();
  double microturbine_init();
  int microturbine_presync(int t0, int t1);
  double microturbine_sync(double CircuitA_V_Out_re, double CircuitA_V_Out_im, double CircuitB_V_Out_re, double CircuitB_V_Out_im, double CircuitC_V_Out_re, double CircuitC_V_Out_im, double LineA_V_Out_re, double LineA_V_Out_im, double LineB_V_Out_re, double LineB_V_Out_im, double LineC_V_Out_re, double LineC_V_Out_im);
private:
  mutable staff::ServiceClient m_tClient;
  std::string m_sServiceUri;
};


namespace staff
{
  class DataObject;
}

#endif

