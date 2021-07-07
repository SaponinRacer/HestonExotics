/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at https://mozilla.org/MPL/2.0/. */
#pragma once 
#include"Types.h"
#include <list>
#include<math.h>
const double trading_days=static_cast<double>(5*static_cast<unsigned int>(365/7)+365%7);
const ffloat risk_free= pow(1.0005,1/trading_days)-1.0; //nominal risk free rate (p.a.) 3 month T-bill yields 0.0005
ffloat avg_imp_vol(const ffloat S, const std::list<option>& opts);
ffloat call_price(const ffloat S, const ffloat K, const ffloat r, const ffloat sigma, const double T);
