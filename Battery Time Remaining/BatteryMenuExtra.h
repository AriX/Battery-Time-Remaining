#import <Cocoa/Cocoa.h>
#import "SystemUIPlugin.h"

#ifndef _BTR_MENU
#define _BTR_MENU

#define kBTRMenuPowerSourcePercent  1
#define kBTRMenuPowerSourceState    2
#define kBTRMenuPowerSourceAdvanced 3
#define kBTRMenuStartAtLogin        4
#define kBTRMenuNotification        5
#define kBTRMenuSetting             6
#define kBTRMenuAdvanced            7
#define kBTRMenuParenthesis         8
#define kBTRMenuEnergySaverSetting  9
#define kBTRMenuUpdater             10
#define kBTRMenuQuitKey             11

#endif

@class BatteryMenuExtraView;

@interface BatteryMenuExtra : NSMenuExtra <NSMenuDelegate, NSUserNotificationCenterDelegate> {
    BatteryMenuExtraView *extraView;
}

@property (nonatomic) NSInteger previousPercent;
@property (nonatomic) NSInteger currentPercent;
@property (strong) NSMutableDictionary *notifications;
@property (nonatomic) bool advancedSupported;

- (void)updateStatusItem;
- (NSImage *)getBatteryIconNamed:(NSString *)iconName;
- (NSImage *)getBatteryIconPercent:(NSInteger)percent;

@end
