#import <Foundation/Foundation.h>
#import "EJBindingEventedBase.h"

#define EJ_TOUCH_INPUT_MAX_TOUCHES 5

@interface EJBindingTouchInput : EJBindingEventedBase <EJTouchDelegate> {
	JSStringRef jsLengthName;
	JSStringRef jsIdentifierName, jsPageXName, jsPageYName, jsClientXName, jsClientYName;
	JSObjectRef jsRemainingTouches, jsChangedTouches;
	JSObjectRef jsTouchesPool[EJ_TOUCH_INPUT_MAX_TOUCHES];
}

- (void)triggerEvent:(NSString *)name all:(NSSet *)all changed:(NSSet *)changed remaining:(NSSet *)remaining;

@end
