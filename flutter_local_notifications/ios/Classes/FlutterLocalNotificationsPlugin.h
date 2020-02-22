#import <Flutter/Flutter.h>
#import <UserNotifications/UserNotifications.h>
#import "./NotificationDetails.h"

@interface FlutterLocalNotificationsPlugin : NSObject <FlutterPlugin>
+ (void) showLocalNotification:(NotificationDetails *) notificationDetails;
@end
