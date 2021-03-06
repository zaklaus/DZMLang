/* 
  Copyright 2016 Dominik Madarasz

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
*/

static inline OBJECT *
make_lambda(OBJECT *Parameters, OBJECT *Body)
{
    return(make_pair(LambdaSymbol,
                     make_pair(Parameters, Body)));
}

static inline b32
is_lambda(OBJECT *Exp)
{
    return(is_tagged_list(Exp, LambdaSymbol) ||
           is_tagged_list(Exp, ShortLambdaSymbol));
}

static inline OBJECT *
lambda_parameters(OBJECT *Exp)
{
    return(pair_get_a(pair_get_b(Exp)));
}

static inline OBJECT *
lambda_body(OBJECT *Exp)
{
    return(pair_get_b(pair_get_b(Exp)));
}
