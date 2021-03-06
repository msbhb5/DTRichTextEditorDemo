//
//  DTRichTextEditorViewController.h
//  DTRichTextEditor
//
//  Created by Oliver Drobnik on 1/23/11.
//  Copyright 2011 Cocoanetics. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <DTRichTextEditor/DTRichTextEditor.h>
#import "DTFormatViewController.h"

@class DTRichTextEditorTestState, DTRichTextEditorTestStateController, DTFormatViewController;

@interface DTRichTextEditorViewController : UIViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate, UIPopoverControllerDelegate, DTAttributedTextContentViewDelegate, DTRichTextEditorViewDelegate, DTFormatDelegate> {

	IBOutlet DTRichTextEditorView *richEditor;
	
	UITextRange *lastSelection;
	
    UIPopoverController *popover;
    
    NSCache *_imageViewCache;
	
	
	// demonstrating inputAccessoryView
	UIToolbar *toolbar;
	UIBarButtonItem *photoButton;
	
	// font toggling
	UIBarButtonItem *boldButton;
	UIBarButtonItem *italicButton;
	UIBarButtonItem *underlineButton;
    UIBarButtonItem *highlightButton;
	
	// paragraph alignment buttons
	UIBarButtonItem *leftAlignButton;
	UIBarButtonItem *centerAlignButton;
	UIBarButtonItem *rightAlignButton;
	UIBarButtonItem *justifyAlignButton;
	
	// indent buttons
	UIBarButtonItem *increaseIndentButton;
	UIBarButtonItem *decreaseIndentButton;
	
	// lists
	UIBarButtonItem *unorderedListButton;
	UIBarButtonItem *orderedListButton;
	
	// URL
	UIBarButtonItem *linkButton;
    
    // Insert Menu
    BOOL _showInsertMenu;
}

@property (nonatomic, retain) NSCache *imageViewCache;

@property (nonatomic, retain) NSArray *menuItems;
@property (nonatomic, retain) DTRichTextEditorTestState *testState;
@property (nonatomic, retain) UIPopoverController *testOptionsPopover;
@property (nonatomic, retain) DTRichTextEditorTestStateController *testStateController;
@property (nonatomic, retain) UIPopoverController *formatOptionsPopover;
@property (nonatomic, retain) DTFormatViewController *formatViewController;

@end

