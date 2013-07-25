//
//  EXSampleMianPageOprator.h
//  EsayXSamples
//
//  Created by jf4444 on 12-8-28.
//  Copyright (c) 2012年 feng lu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EXSampleWebBaseOprator.h"

@interface EXSampleMianPageOprator : EXSampleWebBaseOprator {
    NSString *_systime;
    NSMutableArray *_activityList;
}

@property (nonatomic, retain) NSString *systime;
@property (nonatomic, retain) NSMutableArray *activityList;

@end
