//
//  UIApplication+LocalNotifications.h
//  TouchCustoms
//
//  Created by Aleks Nesterow-Rutkowski on 6/11/10.
//	aleks@screencustoms.com
//	
//	Purpose
//	Contains helper methods to work easily with Local notifications.
//

@interface UIApplication (LocalNotifications)

+ (void)showLocalNotification:(NSString *)text;
+ (void)showLocalNotification:(NSString *)text actionButton:(NSString *)buttonText;

@end
