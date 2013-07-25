//
//  EXRecordModel.h
//  EasyX
//
//  Created by feng lu on 13-5-30.
//  Copyright (c) 2013年 feng lu. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface EXRecordModel : NSObject
{
    NSString*               _recordImagePath;
    CGPoint                 _touchPoint;
}


@property(nonatomic, copy) NSString*               recordImagePath;
@property(nonatomic, assign) CGPoint               touchPoint;

@end
