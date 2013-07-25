//
//  EXImageManModel.h
//  Four20
//
//  Created by jf4444 on 13-7-1.
//  Copyright (c) 2013年 feng lu. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface EXImageManModel : NSObject {
@private
    NSString *_imageUrlString;
    int _avtivityEndTime;
    id _target;
    id _index;
}

@property (nonatomic, copy) NSString *imageUrlString;
@property (nonatomic, assign) int avtivityEndTime;
@property (nonatomic, retain) id target;
@property (nonatomic, retain) id index;

@end
