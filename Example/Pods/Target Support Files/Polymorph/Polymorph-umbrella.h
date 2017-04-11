#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "PLMModel.h"
#import "PLMRawDataProvider.h"
#import "Polymorph.h"
#import "PLMArrayTransformer.h"
#import "PLMURLTransformer.h"
#import "PLMValueTransformer.h"

FOUNDATION_EXPORT double PolymorphVersionNumber;
FOUNDATION_EXPORT const unsigned char PolymorphVersionString[];

