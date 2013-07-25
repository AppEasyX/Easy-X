//
//  EXSampleWebBaseOprator.h
//  EsayXSamples
//
//  Created by jf4444 on 12-8-27.
//  Copyright (c) 2012年 feng lu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EXSampleModel.h"
#import "EXSampleWebDefines.h"

@interface EXSampleWebBaseOprator : EXSampleModel {
    NSString *_responseCode;
    NSString *_responseMsg;
    NSDictionary *_contentDict;
}

@property (nonatomic, copy) NSString *responseCode;
@property (nonatomic, copy) NSString *responseMsg;
@property (nonatomic, retain) NSDictionary *contentDict;

- (void)fillModelWithResponseDict:(NSDictionary *)dict;

@end
