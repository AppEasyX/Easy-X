//
//  EXProjectInfo.h
//  EasyX
//
//  Created by feng lu on 13-1-15.
//  Copyright (c) 2013年 feng lu. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface EXProjectInfo : NSObject


+ (EXProjectInfo*)currentCache;

- (BOOL)getProjectDebugKey;
@end
