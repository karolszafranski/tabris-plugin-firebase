//
//  ESFBMessaging.h
//  firebase
//
//  Created by Patryk Mol on 19.06.17.
//
//

#import <Tabris/BasicWidget.h>

@interface ESFBMessaging : BasicWidget
@property (strong, readonly) NSString *instanceId;
@property (strong, readonly) NSString *token;
@property (strong, readonly) NSString *launchData;
@property (assign) BOOL tokenChangedListener;
@property (assign) BOOL instanceIdChangedListener;
@property (assign) BOOL messageListener;
+ (void)registerForNotifiations;
@end
