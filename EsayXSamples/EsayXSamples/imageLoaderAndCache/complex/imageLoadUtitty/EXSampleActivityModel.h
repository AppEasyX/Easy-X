//
//  EXSampleActivityModel.h
//  EsayXSamples
//
//  Created by jf4444 on 12-8-28.
//  Copyright (c) 2012年 feng lu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EXSampleModel.h"

@interface EXSampleActivityModel : EXSampleModel {
    NSString *_activityid;
    NSString *_brand;
    NSString *_cate;
    NSString *_activityname;
    NSString *_endtime;
    NSString *_pic;
    NSString *_starttime;
    NSString *_t0;
    NSString *_t1;
    NSString *_t2;
}

@property (nonatomic, copy) NSString *activityid;
@property (nonatomic, copy) NSString *brand;
@property (nonatomic, copy) NSString *cate;
@property (nonatomic, copy) NSString *activityname;
@property (nonatomic, copy) NSString *endtime;
@property (nonatomic, copy) NSString *pic;
@property (nonatomic, copy) NSString *starttime;
@property (nonatomic, copy) NSString *t0;
@property (nonatomic, copy) NSString *t1;
@property (nonatomic, copy) NSString *t2;

@end
