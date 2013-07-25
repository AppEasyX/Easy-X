//
//  EXSampleMianPageOprator.m
//  EsayXSamples
//
//  Created by jf4444 on 12-8-28.
//  Copyright (c) 2012年 feng lu. All rights reserved.
//

#import "EXSampleMianPageOprator.h"
#import "EXSampleActivityModel.h"

#define SYSTEMTIME  @"systime"
#define ACTIVITY    @"activity"

@interface  EXSampleMianPageOprator()
- (void)prepareActivityList:(NSArray *)listArr;
@end

@implementation EXSampleMianPageOprator

@synthesize systime = _systime;
@synthesize activityList = _activityList;

- (void)dealloc {
    EX_RELEASE_SAFELY(_activityList);
    EX_RELEASE_SAFELY(_systime);
    
    [super dealloc];
}

- (id)init {
    self = [super init];
    if (self) {
        _activityList = [[NSMutableArray alloc] init];
    }
    
    return self;
}


- (void)fillModelWithResponseDict:(NSDictionary *)dict {
    self.responseCode = [dict objectForKey:RESPONSE_CODE];
    self.responseMsg = [dict objectForKey:RESPONSE_MSG];
    
    self.contentDict = [dict objectForKey:RESPONSE_CONTENT];
    
    self.systime = [_contentDict objectForKey:SYSTEMTIME];
    
    NSArray *activityList = [_contentDict objectForKey:ACTIVITY];
    [self prepareActivityList:activityList];
}


- (void)prepareActivityList:(NSArray *)listArr {
    for (int index = 0; index < [listArr count]; index ++) {
        NSArray *tempArr = [listArr objectAtIndex:index];
        
        NSMutableArray *subDataArr = [[NSMutableArray alloc] init];
        for (NSDictionary *tempDict in tempArr) {
            EXSampleActivityModel *activityModel = [[EXSampleActivityModel alloc] init];
            [activityModel fillSelfWithDict:tempDict];
            [subDataArr addObject:activityModel];
            [activityModel release];
        }
        
        [_activityList addObject:subDataArr]; 
        
        [subDataArr release];
    }
}

@end
