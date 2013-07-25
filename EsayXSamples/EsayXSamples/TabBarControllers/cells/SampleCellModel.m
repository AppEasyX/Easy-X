//
//  SampleCellModel.m
//  EsayXSamples
//
//  Created by jf4444 on 13-6-13.
//  Copyright (c) 2013年 feng lu. All rights reserved.
//

#import "SampleCellModel.h"

@implementation SampleCellModel

@synthesize dataIndexPath = _dataIndexPath;
@synthesize testSampleCellData = _testSampleCellData;


- (void)dealloc {
    EX_RELEASE_SAFELY(_dataIndexPath);
    EX_RELEASE_SAFELY(_testSampleCellData);
    
    [super dealloc];
}

@end
