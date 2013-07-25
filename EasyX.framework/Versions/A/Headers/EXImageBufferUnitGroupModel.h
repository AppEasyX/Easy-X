//
//  EXImageBufferUnitGroupModel.h
//  SunNote
//
//  Created by jf4444 on 13-4-2.
//
//

/**
 *  创建需要加载的图片数据时，此model包含EXImageBufferUnitGroup以及EXImageBufferUnitGroup的groupRandomKey和对应的unitModel的数组
 */

#import <Foundation/Foundation.h>
#import "EXImageBufferUnitGroup.h"

@interface EXImageBufferUnitGroupModel : NSObject {
@private
    NSString *_groupRandomKey;
    EXImageBufferUnitGroup *_bufferUnitGroup;
    NSArray *_bufferUnitModelObjArr;
}

/**
 * EXImageBufferUnitGroup的groupRandomKey，只读。在创建完此model后groupRandomKey自动就会创建好
 */
@property (nonatomic, copy, readonly) NSString *groupRandomKey;

/**
 * bufferUnitGroup，只读。在创建完此model后bufferUnitGroup自动就会创建好
 */
@property (nonatomic, retain, readonly) EXImageBufferUnitGroup *bufferUnitGroup;

/**
 * 对应的unitModel的数组
 */
@property (nonatomic, retain) NSArray *bufferUnitModelObjArr;

@end
