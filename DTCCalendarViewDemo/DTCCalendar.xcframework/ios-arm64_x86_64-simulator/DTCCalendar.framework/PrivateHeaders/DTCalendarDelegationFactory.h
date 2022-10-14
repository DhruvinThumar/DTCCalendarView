

#import <Foundation/Foundation.h>
#import "DTCalendarDelegationProxy.h"

@interface DTCalendarDelegationFactory : NSObject

+ (DTCalendarDelegationProxy *)dataSourceProxy;
+ (DTCalendarDelegationProxy *)delegateProxy;

@end
