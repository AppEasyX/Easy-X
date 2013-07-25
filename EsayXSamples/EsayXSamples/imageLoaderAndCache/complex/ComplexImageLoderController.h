//
//  ComplexImageLoderController.h
//  EsayXSamples
//
//  Created by jf4444 on 13-6-9.
//  Copyright (c) 2013年 feng lu. All rights reserved.
//

/**
 *  展示图片加载工具如何加载图片
 *  从模拟由服务器下载数据开始
 *  数据为内置本地的一份json文件
 *  对应创建了解析所需要的各个model
 *  同时也展示了通过框架如何创建一个复杂的展示界面
 */

@class EXSampleMianPageOprator;
@interface ComplexImageLoderController : EXTableViewController {
    EXSampleMianPageOprator *_mainPageOprator;
@private
    NSString *_targrtGroupRandomKey;
    NSString *_unitRandmKey;
    
    NSMutableArray *_unitAllUrls;
    NSMutableDictionary *_unitDict;
}
@end
