//
//  FCorePreprocessorMacros.h
//  EasyX
//
//  Created by feng  on 12-11-1.
//  Copyright (c) 2012年 feng lu. All rights reserved.
//

#ifndef EasyX_FCorePreprocessorMacros_h
#define EasyX_FCorePreprocessorMacros_h

// Time

#define F_MINUTE 60
#define F_HOUR   (60 * TT_MINUTE)
#define F_DAY    (24 * TT_HOUR)
#define F_5_DAYS (5 * TT_DAY)
#define F_WEEK   (7 * TT_DAY)
#define F_MONTH  (30.5 * TT_DAY)
#define F_YEAR   (365 * TT_DAY)

// Safe releases

#define F_INVALIDATE_TIMER(__TIMER) { [__TIMER invalidate]; __TIMER = nil; }

#endif
