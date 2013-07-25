//
//  EXSampleActivityModel.m
//  EsayXSamples
//
//  Created by jf4444 on 12-8-28.
//  Copyright (c) 2012年 feng lu. All rights reserved.
//

#import "EXSampleActivityModel.h"

@implementation EXSampleActivityModel

@synthesize activityid = _activityid;
@synthesize brand = _brand;
@synthesize cate = _cate;
@synthesize activityname = _activityname;
@synthesize endtime = _endtime;
@synthesize pic = _pic;
@synthesize starttime = _starttime;
@synthesize t0 = _t0;
@synthesize t1 = _t1;
@synthesize t2 = _t2;

- (void)dealloc {
    EX_RELEASE_SAFELY(_activityid);
    EX_RELEASE_SAFELY(_brand);
    EX_RELEASE_SAFELY(_cate);
    EX_RELEASE_SAFELY(_activityname);
    EX_RELEASE_SAFELY(_endtime);
    EX_RELEASE_SAFELY(_pic);
    EX_RELEASE_SAFELY(_starttime);
    EX_RELEASE_SAFELY(_t0);
    EX_RELEASE_SAFELY(_t1);
    EX_RELEASE_SAFELY(_t2);
    
    [super dealloc];
}


- (id)init {
    self = [super init];
    if (self) {
        // init data
    }
    
    return self;
}

@end
