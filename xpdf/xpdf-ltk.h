// This file was generated by ltkbuild 0.80

LTKWindow *makeWindow(LTKApp *app) {
  return new LTKWindow(app, gFalse, "xpdf", xpdfIcon, NULL,
    new LTKBox(NULL, 1, 2, 0, 0, 0, 0, ltkBorderNone, 1, 1,
      new LTKBox(NULL, 2, 2, 0, 0, 0, 0, ltkBorderNone, 1, 1,
        new LTKBox(NULL, 1, 1, 2, 2, 2, 2, ltkBorderSunken, 1, 1,
          new LTKScrollingCanvas("canvas", 0, 100, 100, 32, 32)
        ),
        new LTKBox(NULL, 1, 1, 2, 2, 2, 2, ltkBorderNone, 0, 1,
          new LTKScrollbar("vScrollbar", 0, gTrue, 0, 100, &scrollVertCbk)
        ),
        new LTKBox(NULL, 1, 1, 2, 2, 2, 2, ltkBorderNone, 1, 0,
          new LTKScrollbar("hScrollbar", 0, gFalse, 0, 100, &scrollHorizCbk)
        ),
        new LTKBox(NULL, 1, 1, 2, 2, 2, 2, ltkBorderNone, 0, 0,
          new LTKEmpty()
        )
      ),
      new LTKBox(NULL, 14, 1, 0, 0, 0, 0, ltkBorderNone, 1, 0,
        new LTKBox(NULL, 1, 1, 2, 2, 2, 2, ltkBorderNone, 0, 0,
          new LTKButton(NULL, 0, dblLeftArrow_bits, dblLeftArrow_width, dblLeftArrow_height, ltkButtonClick, &prevTenPageCbk)
        ),
        new LTKBox(NULL, 1, 1, 2, 2, 2, 2, ltkBorderNone, 0, 0,
          new LTKButton(NULL, 0, leftArrow_bits, leftArrow_width, leftArrow_height, ltkButtonClick, &prevPageCbk)
        ),
        new LTKBox(NULL, 1, 1, 2, 2, 2, 2, ltkBorderNone, 0, 0,
          new LTKButton(NULL, 0, rightArrow_bits, rightArrow_width, rightArrow_height, ltkButtonClick, &nextPageCbk)
        ),
        new LTKBox(NULL, 1, 1, 2, 2, 2, 2, ltkBorderNone, 0, 0,
          new LTKButton(NULL, 0, dblRightArrow_bits, dblRightArrow_width, dblRightArrow_height, ltkButtonClick, &nextTenPageCbk)
        ),
        new LTKBox(NULL, 1, 1, 2, 2, 2, 2, ltkBorderNone, 0, 0,
          new LTKLabel(NULL, 0, ltkLabelStatic, 8, "-*-courier-medium-r-normal-*-14-*-*-*-*-*-*-*", "Page")
        ),
        new LTKBox(NULL, 1, 1, 4, 4, 2, 2, ltkBorderSunken, 0, 0,
          new LTKTextIn("pageNum", 0, 6, "-*-courier-medium-r-normal-*-14-*-*-*-*-*-*-*", &pageNumCbk, NULL)
        ),
        new LTKBox(NULL, 1, 1, 2, 2, 2, 2, ltkBorderNone, 0, 0,
          new LTKLabel("numPages", 0, ltkLabelMaxLength, 9, "-*-courier-medium-r-normal-*-14-*-*-*-*-*-*-*", NULL)
        ),
        new LTKBox(NULL, 1, 1, 2, 2, 2, 2, ltkBorderNone, 0, 0,
          new LTKButton(NULL, 0, zoomIn_bits, zoomIn_width, zoomIn_height, ltkButtonClick, &zoomInCbk)
        ),
        new LTKBox(NULL, 1, 1, 2, 2, 2, 2, ltkBorderNone, 0, 0,
          new LTKButton(NULL, 0, zoomOut_bits, zoomOut_width, zoomOut_height, ltkButtonClick, &zoomOutCbk)
        ),
        new LTKBox(NULL, 1, 1, 2, 2, 2, 2, ltkBorderNone, 0, 0,
          new LTKButton(NULL, 0, find_bits, find_width, find_height, ltkButtonClick, &findCbk)
        ),
        new LTKBox(NULL, 1, 1, 2, 2, 2, 2, ltkBorderNone, 0, 0,
          new LTKButton(NULL, 0, postscript_bits, postscript_width, postscript_height, ltkButtonClick, &postScriptCbk)
        ),
        new LTKBox(NULL, 1, 1, 2, 2, 2, 2, ltkBorderNone, 0, 0,
          new LTKButton(NULL, 0, about_bits, about_width, about_height, ltkButtonClick, &aboutCbk)
        ),
        new LTKBox(NULL, 1, 1, 2, 2, 2, 2, ltkBorderNone, 1, 0,
          new LTKLabel("link", 0, ltkLabelFixedWidth, 8, "-*-helvetica-medium-r-normal-*-12-*-*-*-*-*-*-*", NULL)
        ),
        new LTKBox(NULL, 1, 1, 2, 2, 2, 2, ltkBorderNone, 0, 0,
          new LTKButton(NULL, 0, "Quit", ltkButtonClick, &quitCbk)
        )
      )
    )
  );
}

LTKMenu *makeMenu() {
  return new LTKMenu("xpdf", 7,
    new LTKMenuItem("Open...", "O", menuOpen, &menuCbk, NULL),
    new LTKMenuItem("Save as...", NULL, menuSavePDF, &menuCbk, NULL),
    new LTKMenuItem(NULL, NULL, 0, NULL, NULL),
    new LTKMenuItem("Rotate left", NULL, menuRotateLeft, &menuCbk, NULL),
    new LTKMenuItem("Rotate right", NULL, menuRotateRight, &menuCbk, NULL),
    new LTKMenuItem(NULL, NULL, 0, NULL, NULL),
    new LTKMenuItem("Quit", "Q", menuQuit, &menuCbk, NULL)

  );
}

LTKWindow *makePostScriptDialog(LTKApp *app) {
  return new LTKWindow(app, gTrue, "xpdf: PostScript output", NULL, "ok",
    new LTKBox(NULL, 1, 3, 0, 0, 0, 0, ltkBorderNone, 0, 0,
      new LTKBox(NULL, 4, 1, 0, 0, 0, 0, ltkBorderNone, 0, 0,
        new LTKBox(NULL, 1, 1, 2, 2, 2, 2, ltkBorderNone, 0, 0,
          new LTKLabel(NULL, 0, ltkLabelStatic, 8, NULL, "Pages:")
        ),
        new LTKBox(NULL, 1, 1, 2, 2, 2, 2, ltkBorderSunken, 0, 0,
          new LTKTextIn("firstPage", 0, 6, "-*-courier-medium-r-normal-*-14-*-*-*-*-*-*-*", NULL, "lastPage")
        ),
        new LTKBox(NULL, 1, 1, 2, 2, 2, 2, ltkBorderNone, 0, 0,
          new LTKLabel(NULL, 0, ltkLabelStatic, 8, NULL, "to")
        ),
        new LTKBox(NULL, 1, 1, 2, 2, 2, 2, ltkBorderSunken, 0, 0,
          new LTKTextIn("lastPage", 0, 6, "-*-courier-medium-r-normal-*-14-*-*-*-*-*-*-*", NULL, "fileName")
        )
      ),
      new LTKBox(NULL, 2, 1, 0, 0, 0, 0, ltkBorderNone, 0, 0,
        new LTKBox(NULL, 1, 1, 2, 2, 2, 2, ltkBorderNone, 0, 0,
          new LTKLabel(NULL, 0, ltkLabelStatic, 8, NULL, "File:")
        ),
        new LTKBox(NULL, 1, 1, 2, 2, 2, 2, ltkBorderSunken, 1, 0,
          new LTKTextIn("fileName", 0, 32, "-*-courier-medium-r-normal-*-14-*-*-*-*-*-*-*", NULL, NULL)
        )
      ),
      new LTKBox(NULL, 3, 1, 0, 0, 8, 0, ltkBorderNone, 0, 0,
        new LTKBox(NULL, 1, 1, 8, 2, 2, 2, ltkBorderNone, 0, 0,
          new LTKButton("ok", 1, "Ok", ltkButtonClick, &psButtonCbk)
        ),
        new LTKBox(NULL, 1, 1, 2, 2, 2, 2, ltkBorderNone, 1, 0,
          new LTKEmpty()
        ),
        new LTKBox(NULL, 1, 1, 2, 8, 2, 2, ltkBorderNone, 0, 0,
          new LTKButton(NULL, 0, "Cancel", ltkButtonClick, &psButtonCbk)
        )
      )
    )
  );
}

LTKWindow *makeOpenDialog(LTKApp *app) {
  return new LTKWindow(app, gTrue, "xpdf: Open...", NULL, "open",
    new LTKBox(NULL, 1, 2, 0, 0, 0, 0, ltkBorderNone, 1, 1,
      new LTKBox(NULL, 1, 1, 2, 2, 2, 2, ltkBorderNone, 1, 1,
        new LTKFileReq("fileReq", 0, openSelectCbk, "-*-courier-medium-r-normal-*-14-*-*-*-*-*-*-*")
      ),
      new LTKBox(NULL, 3, 1, 0, 0, 8, 0, ltkBorderNone, 1, 0,
        new LTKBox(NULL, 1, 1, 8, 2, 2, 2, ltkBorderNone, 0, 0,
          new LTKButton("open", 1, "Open", ltkButtonClick, &openButtonCbk)
        ),
        new LTKBox(NULL, 1, 1, 2, 2, 2, 2, ltkBorderNone, 1, 0,
          new LTKEmpty()
        ),
        new LTKBox(NULL, 1, 1, 2, 8, 2, 2, ltkBorderNone, 0, 0,
          new LTKButton(NULL, 0, "Cancel", ltkButtonClick, &openButtonCbk)
        )
      )
    )
  );
}

LTKWindow *makeSaveDialog(LTKApp *app) {
  return new LTKWindow(app, gTrue, "xpdf: Save as...", NULL, "save",
    new LTKBox(NULL, 1, 2, 0, 0, 0, 0, ltkBorderNone, 1, 1,
      new LTKBox(NULL, 1, 1, 2, 2, 2, 2, ltkBorderNone, 1, 1,
        new LTKFileReq("fileReq", 0, saveSelectCbk, "-*-courier-medium-r-normal-*-14-*-*-*-*-*-*-*")
      ),
      new LTKBox(NULL, 3, 1, 0, 0, 8, 0, ltkBorderNone, 1, 0,
        new LTKBox(NULL, 1, 1, 8, 2, 2, 2, ltkBorderNone, 0, 0,
          new LTKButton("save", 1, "Save", ltkButtonClick, &saveButtonCbk)
        ),
        new LTKBox(NULL, 1, 1, 2, 2, 2, 2, ltkBorderNone, 1, 0,
          new LTKEmpty()
        ),
        new LTKBox(NULL, 1, 1, 2, 8, 2, 2, ltkBorderNone, 0, 0,
          new LTKButton(NULL, 0, "Cancel", ltkButtonClick, &saveButtonCbk)
        )
      )
    )
  );
}

LTKWindow *makeFindWindow(LTKApp *app) {
  return new LTKWindow(app, gFalse, "xpdf: Find", NULL, "find",
    new LTKBox(NULL, 1, 3, 0, 0, 0, 0, ltkBorderNone, 1, 1,
      new LTKBox(NULL, 2, 1, 0, 0, 0, 0, ltkBorderNone, 1, 0,
        new LTKBox(NULL, 1, 1, 2, 2, 2, 2, ltkBorderNone, 0, 0,
          new LTKLabel(NULL, 0, ltkLabelStatic, 8, NULL, "Text:")
        ),
        new LTKBox(NULL, 1, 1, 2, 2, 2, 2, ltkBorderSunken, 1, 0,
          new LTKTextIn("text", 0, 32, "-*-courier-medium-r-normal-*-14-*-*-*-*-*-*-*", NULL, NULL)
        )
      ),
      new LTKBox(NULL, 1, 1, 2, 2, 2, 2, ltkBorderNone, 1, 1,
        new LTKEmpty()
      ),
      new LTKBox(NULL, 3, 1, 0, 0, 8, 0, ltkBorderNone, 1, 0,
        new LTKBox(NULL, 1, 1, 8, 2, 2, 2, ltkBorderNone, 0, 0,
          new LTKButton("find", 1, "Find", ltkButtonClick, &findButtonCbk)
        ),
        new LTKBox(NULL, 1, 1, 2, 2, 2, 2, ltkBorderNone, 1, 0,
          new LTKEmpty()
        ),
        new LTKBox(NULL, 1, 1, 2, 8, 2, 2, ltkBorderNone, 0, 0,
          new LTKButton(NULL, 0, "Close", ltkButtonClick, &findButtonCbk)
        )
      )
    )
  );
}

LTKWindow *makeAboutWindow(LTKApp *app) {
  return new LTKWindow(app, gFalse, "About xpdf", NULL, "close",
    new LTKBox(NULL, 1, 2, 0, 0, 0, 0, ltkBorderNone, 0, 0,
      new LTKBox(NULL, 1, 11, 2, 2, 2, 2, ltkBorderSunken, 0, 0,
        new LTKBox(NULL, 1, 1, 2, 2, 2, 0, ltkBorderNone, 0, 0,
          new LTKLabel(NULL, 0, ltkLabelStatic, 8, "-*-times-bold-i-normal-*-24-*-*-*-*-*-*-*", "xpdf")
        ),
        new LTKBox(NULL, 1, 1, 2, 2, 2, 12, ltkBorderNone, 0, 0,
          new LTKLabel(NULL, 0, ltkLabelStatic, 8, NULL, "Version " xpdfVersion)
        ),
        new LTKBox(NULL, 1, 1, 2, 2, 2, 0, ltkBorderNone, 0, 0,
          new LTKLabel(NULL, 0, ltkLabelStatic, 8, NULL, xpdfCopyright)
        ),
        new LTKBox(NULL, 1, 1, 2, 2, 2, 12, ltkBorderNone, 0, 0,
          new LTKLabel(NULL, 0, ltkLabelStatic, 8, NULL, "derekn@foolabs.com")
        ),
        new LTKBox(NULL, 1, 1, 2, 2, 2, 2, ltkBorderNone, 0, 0,
          new LTKLabel(NULL, 0, ltkLabelStatic, 8, NULL, "Supports PDF version " pdfVersion ".")
        ),
        new LTKBox(NULL, 1, 1, 2, 2, 2, 0, ltkBorderNone, 0, 0,
          new LTKLabel(NULL, 0, ltkLabelStatic, 8, NULL, "The PDF data structures, operators, and specification")
        ),
        new LTKBox(NULL, 1, 1, 2, 2, 2, 12, ltkBorderNone, 0, 0,
          new LTKLabel(NULL, 0, ltkLabelStatic, 8, NULL, "are copyright 1995 Adobe Systems Inc.")
        ),
        new LTKBox(NULL, 1, 1, 2, 2, 2, 0, ltkBorderNone, 0, 0,
          new LTKLabel(NULL, 0, ltkLabelStatic, 8, NULL, "Mouse button 1: select text / follow link")
        ),
        new LTKBox(NULL, 1, 1, 2, 2, 2, 0, ltkBorderNone, 0, 0,
          new LTKLabel(NULL, 0, ltkLabelStatic, 8, NULL, "Mouse button 2: pan window")
        ),
        new LTKBox(NULL, 1, 1, 2, 2, 2, 12, ltkBorderNone, 0, 0,
          new LTKLabel(NULL, 0, ltkLabelStatic, 8, NULL, "Mouse button 3: menu")
        ),
        new LTKBox(NULL, 1, 1, 2, 2, 2, 12, ltkBorderNone, 0, 0,
          new LTKLabel(NULL, 0, ltkLabelStatic, 8, NULL, "http://www.foolabs.com/xpdf/")
        )
      ),
      new LTKBox(NULL, 2, 1, 0, 0, 0, 0, ltkBorderNone, 0, 0,
        new LTKBox(NULL, 1, 1, 2, 2, 2, 2, ltkBorderNone, 1, 0,
          new LTKEmpty()
        ),
        new LTKBox(NULL, 1, 1, 2, 2, 2, 2, ltkBorderNone, 0, 0,
          new LTKButton("close", 0, "Close", ltkButtonClick, &closeAboutCbk)
        )
      )
    )
  );
}

