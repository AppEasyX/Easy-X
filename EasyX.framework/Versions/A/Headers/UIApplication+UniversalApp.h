//
//  UIApplication+SCRMethods.h
//  TouchCustoms
//
//  Created by Aleks Nesterow-Rutkowski on 6/11/10.
//	aleks@screencustoms.com
//	
//	Purpose
//	Contains helper methods that help building universal apps for iPhone 3.1.2+ and iPad 3.2
//	that don't produce warnings during compile-time starting from iPhone SDK 3.1.2 and work
//	correctly on Apple devices starting from iPhone 2G with iPhone OS 3.1.2 installed and more
//	mordern devices.
//

@interface UIApplication (UniversalApp)

+ (void)setStatusBarHidden:(BOOL)value;

@end
