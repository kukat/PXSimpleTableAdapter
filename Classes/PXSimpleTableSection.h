//
//  PXSimpleTableSection.h
//  PXSimpleTableAdapter
//
//  Created by Alex Rozanski on 25/03/2011.
//  Copyright 2011 Alex Rozanski. All rights reserved.
//

#import <Foundation/Foundation.h>

@class PXSimpleTableAdapter;

@interface PXSimpleTableSection : NSObject {
    NSString *_sectionHeaderTitle;
    NSString *_sectionFooterTitle;
    
    NSMutableArray *_rows;
    
    PXSimpleTableAdapter *_adapter;
}

@property (nonatomic, readonly, assign) PXSimpleTableAdapter *adapter;

@property (nonatomic, copy) NSString *sectionHeaderTitle;
@property (nonatomic, copy) NSString *sectionFooterTitle;
@property (nonatomic, retain) NSArray *rows;

- (id)initWithRows:(NSArray*)rows;
- (id)initWithSectionHeaderTitle:(NSString*)headerTitle sectionFooterTitle:(NSString*)footerTitle rows:(NSArray*)rows;

+ (id)sectionWithRows:(NSArray*)rows;
+ (id)sectionWithSectionHeaderTitle:(NSString*)headerTitle sectionFooterTitle:(NSString*)footerTitle rows:(NSArray*)rows;

@end
