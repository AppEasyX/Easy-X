//
//  FGlobalStyled.h
//  EasyX
//
//  Created by feng lu on 13-2-28.
//  Copyright (c) 2013年 feng lu. All rights reserved.
//

#import <Foundation/Foundation.h>

//默认字体
#define FONT_SYSTEM			([UIFont systemFontOfSize:17.0f])

//颜色
#define RGBACOLOR(r,g,b,a) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:(a)]
#define RGBCOLOR(r,g,b) RGBACOLOR(r,g,b,1)
#define TEXT_COLOR RGBACOLOR(0,0,0,1)

