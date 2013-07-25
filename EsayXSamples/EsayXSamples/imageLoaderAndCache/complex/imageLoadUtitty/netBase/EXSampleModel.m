//
//  EXSampleModel.m
//  EsayXSamples
//
//  Created by jf4444 on 12-8-27.
//  Copyright (c) 2012年 feng lu. All rights reserved.
//

#import "EXSampleModel.h"

@implementation EXSampleModel


- (void)dealloc {
    [super dealloc];
}


- (id)init {
    self = [super init];
    if (self) {
        // init
    }
    
    return self;
}

- (void)fillSelfWithDict:(NSDictionary *)dict {
    if (dict == nil) {
        return;
    }
    
    for (NSString *k in [dict allKeys]) {
        [self setValue:[dict objectForKey:k] forKey:k];
    }
}


- (void)setValue:(id)value forUndefinedKey:(NSString *)key
{

}

@end
