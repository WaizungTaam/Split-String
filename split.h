/* 
 * Copyright 2016 Waizung Taam
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *     http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <sstream>
#include <string>                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     
#include <vector>


std::vector<std::string> split(const std::string& str, 
                               const std::string& delim) {
  std::vector<std::string> tokens;
  std::string::size_type idx_begin = 0, idx_end = str.find(delim);
  while (idx_end != std::string::npos) {
    tokens.push_back(str.substr(idx_begin, idx_end - idx_begin));
    idx_begin = idx_end + delim.size();
    idx_end = str.find(delim, idx_begin);
  }
  tokens.push_back(str.substr(idx_begin, str.size()));
  return tokens;
}

std::vector<std::string> split(const std::string& str, char delim) {
  return split(str, std::string(1, delim));
}