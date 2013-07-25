//
//  ImageLoaderModel.h
//  EasyXSamples
//
//  Created by jf4444 on 13-7-2.
//  Copyright (c) 2013年 feng lu. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ImageLoaderModel : EXTableDefinitionViewCellModel {
    NSDictionary *_bufferTagrtDict;
    NSString *_imageUrlString;
}

@property (nonatomic, retain) NSDictionary *bufferTagrtDict;
@property (nonatomic, copy) NSString *imageUrlString;

@end
