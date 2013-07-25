//
//  SlideCell.m
//  EsayXSamples
//
//  Created by jf4444 on 13-6-9.
//  Copyright (c) 2013年 feng lu. All rights reserved.
//

#import "SlideCell.h"
#import "SlideCellModel.h"

@interface SlideCell ()
@property(nonatomic, retain) UILabel*            textLable;
@end

@implementation SlideCell

- (void)dealloc
{
    EX_RELEASE_SAFELY(_textLable);
    [super dealloc];
}

- (id)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier {
    self = [super initWithStyle:style reuseIdentifier:reuseIdentifier];
    if (self) {
        // Initialization code
        self.textLable = [[[UILabel alloc] initWithFrame:CGRectMake(10, 0, 320, 44)] autorelease];
        [_textLable setFont:[UIFont boldSystemFontOfSize:20.0f]];
        [self addSubview:_textLable];
        
    }
    return self;
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated
{
    [super setSelected:selected animated:animated];
    if (selected) {
        [_textLable setTextColor:[UIColor whiteColor]];
    }else
        [_textLable setTextColor:[UIColor blackColor]];
    
    // Configure the view for the selected state
}



- (void)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath cellForData:(id)data {
    _textLable.text = (NSString*)data;
}


///////////////////////////////////////////////////////////////////////////////////////////////////
+ (CGFloat)tableView:(UITableView*)tableView rowHeightForObject:(id)object  heightForRowAtIndexPath:(NSIndexPath*)indexPath {
    return 44;
}

@end
