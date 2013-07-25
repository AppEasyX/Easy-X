//
//  EXSampleImgLoadCellModel.h
//  EasyXSample
//
//  Created by feng lu on 12-11-14.
//  Copyright (c) 2012年 feng lu. All rights reserved.
//

//#import "EXTableDefinitionViewCellModel.h"
//#import "EasyX.h"
#import "EXSampleActivityModel.h"

@interface EXSampleImgLoadCellModel : EXTableDefinitionViewCellModel
{
    EXSampleActivityModel *_acModel;
    NSDictionary *_bufferTagrtDict;
}

@property(nonatomic, retain) EXSampleActivityModel *acModel;
@property (nonatomic, retain) NSDictionary *bufferTagrtDict;

@end
