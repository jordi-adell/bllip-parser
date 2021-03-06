/*
 * Copyright 1999, 2005 Brown University, Providence, RI.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License"); you may
 * not use this file except in compliance with the License.  You may obtain
 * a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the
 * License for the specific language governing permissions and limitations
 * under the License.
 */

#ifndef ECARGS_H
#define ECARGS_H

#include <list>
#include "ECString.h"

class ECArgs
{
 public:
  ECArgs(int argc, char *argv[]);
  int nargs() { return nargs_; }
  bool isset(char c);
  ECString value(char c);
  ECString arg(int n) { return argList[n]; }
 private:
  int nargs_;
  int nopts_;
  ECString argList[32];
  list<ECString> optList;
};
  

#endif /* ! ECARGS_H */
