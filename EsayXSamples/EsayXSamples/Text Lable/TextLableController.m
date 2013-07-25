//
//  TextLableController.m
//  EasyXSamples
//
//  Created by feng  on 13-6-23.
//  Copyright (c) 2013年 feng lu. All rights reserved.
//

#import "TextLableController.h"

@implementation TextLableController

- (void)loadView {
    [super loadView];
}

- (void)viewDidLoad {
    [super viewDidLoad];
    [self.view setBackgroundColor:[UIColor whiteColor]];
    self.exNavigationItem.exTitle = @"Text Lable";
    
    [self createModel];
}


- (void)createModel {
    
    NSString* text1 = @"We need to deal with the enemy superhuman courage, and to adhere to a friend in front of their position, but also a great deal of courage./n";
    NSString* text2 = @"For a very sober-minded people, death is just another great adventure./n";
    NSString* text3 = @"If you do not learn to think when you are young, you may never learn.";
    NSString* text4 = @"Deep, controlled breaths and coming into harmony with those around you. It sounds like a description of some of the basic fundamentals of yoga. But it could also be applied to singing. Does comparing the two sound like a stretch? Not to some scientists who say that singing is just as healthy as yoga.";
    
    EXStyledTextLable* textLable = [[[EXStyledTextLable alloc] initWithFrame:CGRectMake(0, 0, 320, 500)] autorelease];
    [textLable addStyledText:[EXStyledText textFromString:text1]];
    
    
    [textLable addStyledText:[EXStyledText textFromString:text2
                                                 textFont:[UIFont systemFontOfSize:13.0f] textColor:[UIColor darkGrayColor]]];
    
    EXStyledText* styledText = [EXStyledText textFromString:text3
                                              textFont:[UIFont systemFontOfSize:15.0f] textColor:[UIColor magentaColor]];
    
    
    styledText.URLs = @"Tab3Controller";
    styledText.textLink = YES;
    [textLable addStyledText:styledText];
    
    [textLable addStyledText:[EXStyledText textFromString:text4]];
    [textLable setContentSpacing:0.0f];
    [textLable addFinish];
    [textLable sizeToFit];
    [self.view addSubview:textLable];

}
@end
