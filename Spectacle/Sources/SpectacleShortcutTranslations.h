#import <Foundation/Foundation.h>

@class SpectacleShortcut;

NSString *SpectacleTranslateKeyCode(NSInteger keyCode, NSUInteger modifiers);
NSString *SpectacleTranslateModifiers(NSUInteger modifiers);
NSString *SpectacleTranslateShortcut(SpectacleShortcut *shortcut);

NSUInteger SpectacleConvertModifiersToCarbonIfNecessary(NSUInteger modifiers);
NSUInteger SpectacleConvertModifiersToCocoaIfNecessary(NSUInteger modifiers);
NSUInteger SpectacleConvertCocoaModifiersToCarbon(NSUInteger modifiers);
NSUInteger SpectacleConvertCarbonModifiersToCocoa(NSUInteger modifiers);
