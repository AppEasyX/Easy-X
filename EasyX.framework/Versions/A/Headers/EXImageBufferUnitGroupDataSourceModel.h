//
//  EXImageBufferUnitGroupDataSourceModel.h
//  SunNote
//
//  Created by jf4444 on 13-4-2.
//
//

/**
 *  下载图片时需要将需要读取图片的数据封装成此model
 */

#import <Foundation/Foundation.h>

@interface EXImageBufferUnitGroupDataSourceModel : NSObject {
@private
    NSString *_unitGroupDataSourceRandomKey;
    NSArray *_urlsArr;
}

/**
 * 设置对应unit的key的数据数组
 */
@property (nonatomic, retain) NSArray *urlsArr;

@end
