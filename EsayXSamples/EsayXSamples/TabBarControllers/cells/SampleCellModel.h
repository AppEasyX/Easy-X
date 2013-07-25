//
//  SampleCellModel.h
//  EsayXSamples
//
//  Created by jf4444 on 13-6-13.
//  Copyright (c) 2013年 feng lu. All rights reserved.
//

@interface SampleCellModel : NSObject {
@private
    NSIndexPath *_dataIndexPath;
    NSString *_testSampleCellData;
}

@property (nonatomic, retain) NSIndexPath *dataIndexPath;
@property (nonatomic, copy) NSString *testSampleCellData;

@end
