//
//  VVDocumenterSetting.h
//  VVDocumenter-Xcode
//
//  Created by 王 巍 on 13-8-3.
//  Copyright (c) 2013年 OneV's Den. All rights reserved.
//

#import <Foundation/Foundation.h>

extern NSString *const VVDDefaultTriggerString;

typedef NS_ENUM(NSUInteger, VVDDoxygenStyle) {
    DOXYGEN_STYLE_DEFAULT
    , DOXYGEN_STYLE_QT
};

@interface VVDocumenterSetting : NSObject
+ (VVDocumenterSetting *)defaultSetting;

-(BOOL) useSpaces;
-(void) setUseSpaces:(BOOL)useSpace;

-(VVDDoxygenStyle) doxygenStyle;
-(void) setDoxygenStyle:(VVDDoxygenStyle)doxygenStyle;

-(BOOL) includeBriefDescription;
-(void) setIncludeBriefDescription:(BOOL)includeBriefDescription;

-(NSInteger) spaceCount;
-(void) setSpaceCount:(NSInteger)spaceCount;

-(NSString *) triggerString;
-(void) setTriggerString:(NSString *)triggerString;

-(BOOL) prefixWithStar;
-(void) setPrefixWithStar:(BOOL)prefix;

-(NSString *) spacesString;

@end
