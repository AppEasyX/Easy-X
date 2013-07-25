//
//  NSObject+scrollDelegate.h
//  SunNote
//
//  Created by jf4444 on 13-5-3.
//
//

#import <Foundation/Foundation.h>

@interface NSObject (scrollDelegate)
- (void)scrollViewDidScroll:(UIScrollView *)scrollView;
- (void)scrollViewDidEndDragging:(UIScrollView *)scrollView willDecelerate:(BOOL)decelerate;
- (void)scrollViewWillBeginDragging:(UIScrollView *)scrollView;
- (void)scrollViewDidEndDecelerating:(UIScrollView *)scrollView;
@end
