// Copyright 2014 SAP AG.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http: //www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing,
// software distributed under the License is distributed on an
// "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific
// language governing permissions and limitations under the License.

#include "client.h"
#include "macros.h"

using namespace node_rfc;

Napi::Object RegisterModule(Napi::Env env, Napi::Object exports)
{

  Client::Init(env, exports);

  //exports.DefineProperties({DEFINE_CONSTANT_STRING(exports, SAPNWRFC_BINDING_VERSION, VERSION)});

  return exports;
}

NODE_API_MODULE(NODE_GYP_MODULE_NAME, RegisterModule)