//
//  UIActionSheet+SCRMethods.h
//  TouchCustoms
//
//  Created by Aleks Nesterow-Rutkowski on 3/25/10.
//	aleks@screencustoms.com
//	
//	Purpose
//	Extension methods for UIActionSheet.
//

@interface UIActionSheet (SCRMethods)

/**
 * There is often need to just show UIActionSheet with a custom message and OK button without providing a delegate
 * or any custom buttons.
 * 
 * @remarks
 *		The UIActionSheet creation method lets you keep the dialog localized in case you provide translation
 *		for "OK" string in your Localizable.strings file.
 */
+ (void)showWithMessage:(NSString *)message fromTabBar:(UITabBar *)tabbar;
+ (void)showWithMessage:(NSString *)message fromToolbar:(UIToolbar *)toolbar;
+ (void)showWithMessage:(NSString *)message inView:(UIView *)view;

@end
