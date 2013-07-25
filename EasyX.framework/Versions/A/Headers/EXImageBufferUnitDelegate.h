//
//  FImageBufferUnitDelegate.h
//  SunNote
//
//  Created by jf4444 on 13-4-2.
//
//

#import <Foundation/Foundation.h>
@class EXImageBufferUnit;

#import <Foundation/Foundation.h>
@class EXImageBufferUnit;

@protocol EXImageBufferUnitDelegate <NSObject>
@required
- (void)refreshImageBuffer:(EXImageBufferUnit *)buffer unitRandomKey:(NSString *)randomKey;
- (void)refreshImageBufferWithoutDelay:(NSDictionary *)dict imageBuffer:(EXImageBufferUnit *)buffer unitRandomKey:(NSString *)randomKey;
@end