//
//  CustomCell.m
//  EasyXSamples
//
//  Created by feng  on 13-7-17.
//  Copyright (c) 2013年 feng lu. All rights reserved.
//

#import "CustomCell.h"
#import "CustomModel.h"

@interface CustomCell ()
@property(nonatomic, retain) EXStyledTextLable* textLable;
@property(nonatomic, assign) BOOL               b;
@end

@implementation CustomCell

@synthesize b = _b;
- (void)dealloc
{
    EX_RELEASE_SAFELY(_textLable);
    [super dealloc];
}

- (id)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier {
    self = [super initWithStyle:style reuseIdentifier:reuseIdentifier];
    if (self) {
        // Initialization code
        self.textLable = [[[EXStyledTextLable alloc]
                           initWithFrame:CGRectMake(10, 0, 300, 100)] autorelease];
        [_textLable sizeToFit];
        [self addSubview:_textLable];
        
    }
    return self;
}


- (void)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath cellForData:(id)data {
    
    if (!_b) {
        CustomModel* model = (CustomModel*)data;
        EXStyledText* textNode = [EXStyledText textFromString:model.text2 textFont:[UIFont systemFontOfSize:13.0f] textColor:[UIColor lightGrayColor]];
        
        [_textLable addStyledText:[EXStyledText textFromString:model.text1 textFont:[UIFont systemFontOfSize:13.0f] textColor:[UIColor grayColor]]];
        [_textLable addStyledText:textNode];
        [_textLable addStyledText:[EXStyledText textFromString:model.text3]];
        
        
        [_textLable addFinish];

        _b = YES;
    }
    

}


+ (CGFloat)tableView:(UITableView*)tableView rowHeightForObject:(id)object  heightForRowAtIndexPath:(NSIndexPath*)indexPath {
    return 90;
}
@end
