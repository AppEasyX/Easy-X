//
//  ImageLoderController.h
//  EsayXSamples
//
//  Created by jf4444 on 13-6-9.
//  Copyright (c) 2013年 feng lu. All rights reserved.
//

/**
 *  展示最简单的图片加载工具如何加载图片
 */

@class EXSampleMianPageOprator;
@interface ImageLoderController : EXTableViewController {
@private
    NSString *_targrtGroupRandomKey;
    
    NSMutableArray *_unitAllUrls;
    NSMutableDictionary *_unitDict;
}

@end
