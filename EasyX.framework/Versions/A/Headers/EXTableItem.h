//
//  EXTableItem.h
//  EasyX
//
//  Created by feng  on 12-11-4.
//  Copyright (c) 2012年 feng lu. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface EXTableItem : NSObject <NSCoding> {
    id _userInfo;
}

@property (nonatomic, retain) id userInfo;
@end
