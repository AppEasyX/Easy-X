//
//  ViewController1.h
//  EsayXSamples
//
//  Created by jf4444 on 13-6-9.
//  Copyright (c) 2013年 feng lu. All rights reserved.
//

/**
 *  EXTableViewController模拟UIKit的UITableViewController
 *  展示了如何设置NavBar的title以及自定义返回（pop）按钮
 *  展示如何设置table的数据
 *  展示如何替换系统的滚动条（只需要一步）
 *  在包含slide的工程中，slide会和自定义滚动条冲突，此controller提供一种解决方案（重写scrollView delegate 一定要super）
 */

@interface TableViewController : EXTableViewController {
@private
    NSIndexPath *_selectIndexPath;
@public
    
}

@end
