//
//  BatteryMenuExtraView.m
//  BatteryTimeRemaining
//
//  Created by Ari on 11/13/12.
//  Copyright (c) 2012 Squish Software. All rights reserved.
//

#import "BatteryMenuExtraView.h"

@interface BatteryMenuExtraView ()

@property (nonatomic, strong) NSMenuExtraView *extraView;

@end

@implementation BatteryMenuExtraView

- (id)initWithFrame:(NSRect)frame menuExtra:(id)menuExtra {
    self = [super initWithFrame:frame menuExtra:menuExtra];
    if (!self)
        return nil;
    
    _extraView = [[NSMenuExtraView alloc] initWithFrame:NSMakeRect(0.0f, 0.0f, 22.0f, 22.0f) menuExtra:menuExtra];

    _label = [[NSTextField alloc] initWithFrame:NSMakeRect(24.0f, 4.0f, 56.0f, 22.0f)];
    _label.editable = NO;
    _label.selectable = NO;
    _label.bezeled = NO;
    _label.alignment = NSCenterTextAlignment;
    _label.font = [NSFont menuFontOfSize:12.0f];
    _label.backgroundColor = [NSColor clearColor];
    
    [self addSubview:_extraView];
    [self addSubview:_label];
    
    return self;
}

- (id)image {
    return self.extraView.image;
}

- (void)setImage:(id)image {
    [self.extraView setImage:image];
}

- (id)alternateImage {
    return self.extraView.alternateImage;
}

- (void)setAlternateImage:(id)alternateImage {
    [self.extraView setAlternateImage:alternateImage];
}

- (void)drawRect:(NSRect)rect {
    [super drawRect:rect];
    
    self.label.textColor = (_menuExtra.isMenuDown) ? [NSColor whiteColor] : [NSColor blackColor];
}

- (void)layout {
    [super layout];
    
    NSRect extraViewFrame = self.extraView.frame;
    extraViewFrame.size.width = [self.extraView.image size].width;
    self.extraView.frame = extraViewFrame;
    
    [self.label sizeToFit];
    NSRect labelFrame = self.label.frame;
    labelFrame.origin.x = extraViewFrame.size.width;
    self.label.frame = labelFrame;
    
    NSRect mainFrame = self.frame;
    mainFrame.size.width = extraViewFrame.size.width + labelFrame.size.width;
    self.frame = mainFrame;
    _menuExtra.length = mainFrame.size.width;
}

@end
